#ifndef Init_h
#define Init_h

class Init
{
  public:
    Init();
    void frameInit();
    void incrementGameMode(boolean up);
    void setGameMode(byte newMode);
    byte getGameMode();
    struct configData{
      byte byteVal1;
      byte byteVal2;
      byte byteVal3;
      byte byteVal4;
      byte byteArray[128];
      byte byteArray2[128];
      bool bool1;
    } activeGameData;
    byte getGameState();
    void setGameState(byte newGameState);


   private:
    byte _gameMode = 0;
    byte _gameState = 0;
    void resetGameData();
    
};

#endif
