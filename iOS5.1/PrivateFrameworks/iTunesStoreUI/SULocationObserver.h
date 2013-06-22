/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "ISOperationDelegate-Protocol.h"

@class CLLocationManager, ISOperation, NSArray;

@interface SULocationObserver : NSObject <CLLocationManagerDelegate, ISOperationDelegate>
{
    int _distanceFilter;
    CLLocationManager *_locationManager;
    NSArray *_locationSections;
    int _observeCount;
    ISOperation *_operation;
}

@property(retain, nonatomic) NSArray *locationSections; // @synthesize locationSections=_locationSections;
- (void)_unregisterForLocationCallbacks;
- (void)_setDistanceFilter:(int)arg1;
- (void)_registerForLocationCallbacks;
- (void)_loadSectionsForLocation:(id)arg1;
- (void)_handleLoadSectionsReseponse:(id)arg1;
- (void)_handleEnabledCheckResponse:(id)arg1;
- (void)_checkIfLocationsAreEnabled;
- (void)_cancelOperation;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
@property(readonly, nonatomic, getter=isObservingLocation) BOOL observingLocation;
- (void)endObserveringLocation;
- (void)endObservingLocation;
- (void)beginObservingLocation;
- (void)dealloc;
- (id)init;

@end
