/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AADeviceLocatorService : NSObject
{
    int _lastKnownState;
    BOOL _hasAttemptedToFetchState;
}

+ (id)sharedInstance;
- (void)disableInContext:(int)arg1 withWipeToken:(id)arg2;
- (void)enableInContext:(int)arg1;
- (void)_updateStateAndNotify:(BOOL)arg1;
- (BOOL)isChangingState;
- (BOOL)isEnabled;

@end

