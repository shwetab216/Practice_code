#include <iostream>

class IAudioService
{
public:
    // A pure virtual function makes this an interface-like abstract class.
    virtual void PlayChime() = 0;

    // Keep deletion through an IAudioService pointer safe for derived objects.
    virtual ~IAudioService() = default;
};

class AudioService : public IAudioService
{
public:
    void PlayChime() override
    {
        std::cout << "Playing chime sound\n";
    }
};

int main()
{
    AudioService audioService;

    // Calling through the base reference uses virtual dispatch.
    IAudioService& audio = audioService;
    audio.PlayChime();
}

