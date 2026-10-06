#include<iostream>
#include<memory>
class IAudioService
{
    public:
    virtual void playsound() = 0;
    virtual ~IAudioService() = default;
};

class AudioService : public IAudioService
{
    public : 
    void playsound() override
    {
        std::cout<<"playing sound"<<std::endl;
    }

};

class ChimeManager
{
public:
    explicit ChimeManager(std::unique_ptr<IAudioService> audio) : m_audio(std::move(audio))
    {
    }

    void playChime()
    {
        m_audio->playsound();
    }

private:
    std::unique_ptr<IAudioService> m_audio;
};

int main()
{

    auto audio = std::make_unique<AudioService>();
    ChimeManager  mgr(std::move(audio));
    mgr.playChime();
}