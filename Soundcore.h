#import <CoreBluetooth/CoreBluetooth.h>
#import <ExternalAccessory/ExternalAccessory.h>
#include "spawn.h"

@interface SoundcoreController : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
+(SoundcoreController *)sharedInstance;
-(void)setCurrentBluetoothListeningMode:(NSString *)listeningMode;
-(NSString *)getCurrentListeningMode;
-(void)setListeningMode:(NSString *)listeningMode forPeripheral:(CBPeripheral *)peripheral forCharacteristic:(CBCharacteristic *)characteristic initializeConnection: (BOOL)initialize;

@property (nonatomic, strong) CBCentralManager *centralManager;
@property (nonatomic, strong) CBPeripheral *peripheral;
@property (nonatomic, strong) CBCharacteristic *foundCharacteristic;
@property (nonatomic, strong) NSString *shouldChangeTolisteningMode;
@property (nonatomic, strong) dispatch_queue_t centralQueue;
@end
