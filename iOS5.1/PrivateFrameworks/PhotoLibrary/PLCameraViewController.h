/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class PLCameraView, PLSyncProgressView;

@interface PLCameraViewController : UIViewController
{
    PLCameraView *_cameraView;
    PLSyncProgressView *_rebuildProgressView;
    BOOL _ignoreAppearCallbacks;
}

- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)_displaysFullScreen;

@end

