﻿#pragma once

namespace WebRTC
{

    class UnityEncoder
    {
    public:
        UnityEncoder();
        virtual ~UnityEncoder();

        sigslot::signal1<std::vector<uint8>&> CaptureFrame;
        virtual void SetRate(uint32 rate) = 0;
        virtual void UpdateSettings(int width, int height) = 0;
        virtual void EncodeFrame(int width, int height) = 0;
        virtual bool IsSupported() const = 0;
        virtual void SetIdrFrame() = 0;
        virtual uint64 GetCurrentFrameCount() = 0;
        virtual void InitEncoder(int width, int height) = 0;
        virtual void InitEncoderResources() = 0;
    };
}

