/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings
{
    BOOL _analysisLoggingEnabled;
    BOOL _analysisFailureOverlayVisible;
    BOOL _analysisLoggingOverlayVisible;
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL analysisLoggingOverlayVisible; // @synthesize analysisLoggingOverlayVisible=_analysisLoggingOverlayVisible;
@property(nonatomic) BOOL analysisFailureOverlayVisible; // @synthesize analysisFailureOverlayVisible=_analysisFailureOverlayVisible;
@property(nonatomic) BOOL analysisLoggingEnabled; // @synthesize analysisLoggingEnabled=_analysisLoggingEnabled;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings; // @synthesize cornerSettings=_cornerSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings; // @synthesize dwellSettings=_dwellSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings; // @synthesize edgeSettings=_edgeSettings;
@property(copy, nonatomic) NSString *navigationGestureMode; // @synthesize navigationGestureMode=_navigationGestureMode;
@property(copy, nonatomic) NSString *multitaskingGestureMode; // @synthesize multitaskingGestureMode=_multitaskingGestureMode;
- (id)navigationGestureModePost351;
- (void)setNavigationGestureModePost351:(id)arg1;
- (id)multitaskingGestureModePost351;
- (void)setMultitaskingGestureModePost351:(id)arg1;
- (void)setDefaultValues;

@end

