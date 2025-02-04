#include "GfxContext.h"

#include <GL/glew.h>

#include "Batch2D.h"

GfxContext::GfxContext(const GfxContext* parent, Viewport& viewport, Batch2D* g2d)
    : parent(parent), viewport(viewport), g2d(g2d) {
}

GfxContext::~GfxContext() {
    if (parent == nullptr)
        return;
    if (depthTest_ != parent->depthTest_) {
        if (depthTest_) glDisable(GL_DEPTH_TEST);
        else glEnable(GL_DEPTH_TEST);
    }
    if (cullFace_ != parent->cullFace_) {
        if (cullFace_) glDisable(GL_CULL_FACE);
        else glEnable(GL_CULL_FACE);
    }
}

const Viewport& GfxContext::getViewport() const {
    return viewport;
}

Batch2D* GfxContext::getBatch2D() const {
    return g2d;
}

GfxContext GfxContext::sub() const {
    auto ctx = GfxContext(this, viewport, g2d);
    ctx.depthTest_ = depthTest_;
    ctx.cullFace_ = cullFace_;
    return ctx;
}

void GfxContext::depthTest(bool flag) {
    if (depthTest_ == flag)
        return;
    depthTest_ = flag;
    if (depthTest_) {
        glEnable(GL_DEPTH_TEST);
    } else {
        glDisable(GL_DEPTH_TEST);
    }
}

void GfxContext::cullFace(bool flag) {
    if (cullFace_ == flag)
        return;
    cullFace_ = flag;
    if (cullFace_) {
        glEnable(GL_CULL_FACE);
    } else {
        glDisable(GL_CULL_FACE);
    }
}