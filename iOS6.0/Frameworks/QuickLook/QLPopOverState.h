/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"

@class UIBarButtonItem, UIDocumentInteractionController;

@interface QLPopOverState : NSObject <UIDocumentInteractionControllerDelegate>
{
    id _delegate;
    UIDocumentInteractionController *_documentInteractionController;
    int _popOverState;
    UIBarButtonItem *_barButtonItem;
}

@property int popOverState; // @synthesize popOverState=_popOverState;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)didRotate;
- (void)willRotate;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (void)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDocumentInteractionController:(id)arg1 delegate:(id)arg2;

@end

