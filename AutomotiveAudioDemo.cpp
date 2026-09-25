#include<iostream>
using namespace std;

class IAudioService
{
    public:
    virtual void playsound() = 0;
    virtual ~IAudioService() = default;

};

class AudioService : public IAudioService
{
    public:
    void playsound() override
    {
        cout<<"Playing chime sound"<<endl;
    }
};

class AudioManager
{
    public:

    AudioManager(IAudioService& audioservice):m_audioService(audioservice)
    {
      
    }
    void handlewarning()
    {
        m_audioService.playsound();
    }

    private:
    IAudioService& m_audioService;
};
int main()
{
    AudioService audioService;

    // Calling through the base reference uses virtual dispatch.
    AudioManager mgr(audioService);
    mgr.handlewarning();
}