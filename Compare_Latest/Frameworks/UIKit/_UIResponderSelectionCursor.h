/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableArray, UIImageView, UIPanGestureRecognizer, UIResponder, UIScrollView, UIWindow;

@interface _UIResponderSelectionCursor : NSObject
{
    UIImageView *_responderSelectionView;
    struct CGPoint _responderSelectionStartLocation;
    UIPanGestureRecognizer *_panResponderSelectionRecognizer;
    NSArray *_remoteGestures;
    BOOL _isFlick;
    double _timeOnTouchDown;
    float _consecutiveWithinRowAccumulator;
    BOOL _isKeepingCompetitiveFarDiagonalResiduals;
    UIResponder *_selectedItemOnTouchDown;
    NSMutableArray *_selectableItems;
    UIScrollView *_scrollingScrollView;
    struct CGPoint _scrollingOffset;
    struct CGPoint _activeFirstResponderScrollViewOffset;
    NSMapTable *_selectionThresholdDictionary;
    NSMapTable *_selectionAccumulationDictionary;
    BOOL _dirtyGeometry;
    UIWindow *_targetWindow;
    UIResponder *_mostLikelyToBeSelectedItem;
    UIScrollView *_activeFirstResponderScrollView;
}

+ (void)initialize;
@property(retain, nonatomic) UIScrollView *activeFirstResponderScrollView; // @synthesize activeFirstResponderScrollView=_activeFirstResponderScrollView;
@property(retain, nonatomic) UIResponder *mostLikelyToBeSelectedItem; // @synthesize mostLikelyToBeSelectedItem=_mostLikelyToBeSelectedItem;
@property(nonatomic) UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void)moveSelection:(id)arg1;
- (void)accumulateWithDelta:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)panTouchUp;
- (void)longFlick;
- (void)panTouchDown;
- (float)verticalSpacingFromItem:(id)arg1;
- (float)horizontalSpacingFromItem:(id)arg1;
- (id)itemsInDirectionOfVector:(struct CGPoint)arg1 withConeOfDegrees:(float)arg2 fromItem:(id)arg3;
- (void)reset;
- (void)resetIfNecessary;
- (void)setSelectedItem:(id)arg1;
- (void)keepSecondaryResidualsCompetitiveTo:(id)arg1;
- (id)possibleResponders;
- (BOOL)inSelectedRow:(id)arg1;
- (struct CGPoint)centerForResponder:(id)arg1;
- (void)setSelectionAccumulation:(float)arg1 forResponder:(id)arg2;
- (float)selectionAccumulationForResponder:(id)arg1;
- (void)setSelectionThreshold:(float)arg1 forResponder:(id)arg2;
- (float)selectionThresholdForResponder:(id)arg1;
- (void)_responderGeometryDidChange;
- (void)moveResponderSelectionInDirection:(struct CGSize)arg1;
- (id)respondersInDirection:(struct CGSize)arg1 inView:(id)arg2;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize)arg1;
- (void)updateResponderSelectionWithPoint:(struct CGPoint)arg1 possibleResponders:(id)arg2;
- (id)responderForPoint:(struct CGPoint)arg1 possibleResponders:(id)arg2;
- (void)updateResponderSelectionRect;
- (void)panResponderSelection:(id)arg1;
- (void)updateFirstResponder:(id)arg1;
- (void)scrollingToFirstResponderDidFinish:(id)arg1;
- (void)dealloc;

@end

