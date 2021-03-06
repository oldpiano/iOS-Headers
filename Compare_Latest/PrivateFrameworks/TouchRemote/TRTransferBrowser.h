/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WPTransferDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, WPTransfer;

@interface TRTransferBrowser : NSObject <WPTransferDelegate>
{
    CDStruct_a554bdc7 *_aesContext;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    int _scannerState;
    WPTransfer *_transferSession;
    id <TRTransferBrowserDelegate> _delegate;
    int _state;
}

@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak id <TRTransferBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (long)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (id)_didReceiveEncryptedData:(id)arg1;
- (void)_didFinishPairing;
- (void)_beginScanningIfPowered;
- (void)stop;
- (void)start;
- (void)transferDidFailToStartAdvertising:(id)arg1;
- (void)transferDidUpdateAdvertiserState:(id)arg1;
- (void)transferComplete;
- (void)transferDidFailWithError:(id)arg1;
- (id)transferDidReceiveData:(id)arg1;
- (void)transferDidFailToStartScanning:(id)arg1;
- (void)transferDidUpdateScannerState:(id)arg1;
- (void)dealloc;
- (id)init;

@end

