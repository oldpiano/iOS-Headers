/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TouchRemote/TRTCPConnection.h>

@class NSObject<OS_dispatch_queue>, NSString;

@interface TRSClientConnection : TRTCPConnection
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _authorized;
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_queue> *_packetEventQueue;
}

- (void).cxx_destruct;
- (void)_handleReceivedPacketEvent:(id)arg1;
- (void)dealloc;
- (id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2;

@end

