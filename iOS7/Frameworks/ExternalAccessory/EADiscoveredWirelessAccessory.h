/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EADiscoveredWirelessAccessoryInternal, NSString;

@interface EADiscoveredWirelessAccessory : NSObject
{
    EADiscoveredWirelessAccessoryInternal *_internal;
}

@property(nonatomic) id <EADiscoveredWirelessAccessoryDelegate> delegate;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
@property(readonly, nonatomic) NSString *name;
- (id)_shortDescription;
- (id)description;
- (void)dealloc;
- (id)_initWithWirelessAccessory:(id)arg1;
- (id)init;

@end

