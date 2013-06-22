/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIAccessibility/NSObjectAccessibility.h>

@interface NSObjectAccessibility (NSObjectAccessibility)
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)_accessibilityScrollDownPage;
- (void)_accessibilityScrollUpPage;
- (void)_accessibilityScrollRightPage;
- (BOOL)_accessibilityScrollPreviousPage;
- (BOOL)_accessibilityScrollNextPage;
- (void)_accessibilityScrollLeftPage;
- (BOOL)accessibilityScrollUpPageSupported;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)_accessibilityHandlePublicScroll:(int)arg1;
- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;
- (void)_accessibilityScrollToVisible;
- (id)_accessibilityScrollAncestor;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (BOOL)_accessibilityIsScrollable;
- (BOOL)_accessibilityIsScrollAncestor;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityFirstVisibleItem;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedLanguage;
- (id)isAccessibilityUserDefinedElement;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedValue;
- (id)accessibilityUserDefinedLabel;
@end
