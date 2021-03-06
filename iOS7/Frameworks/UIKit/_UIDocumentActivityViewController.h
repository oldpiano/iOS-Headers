/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivityViewController.h>

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController
{
    BOOL hideSystemActivities;
    UIDocumentInteractionController *_documentInteractionController;
    BOOL _hideSystemActivities;
}

@property(nonatomic) BOOL hideSystemActivities; // @synthesize hideSystemActivities=_hideSystemActivities;
@property(nonatomic) UIDocumentInteractionController *documentInteractionController; // @synthesize documentInteractionController=_documentInteractionController;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)sourceIsManaged;
- (BOOL)_shouldShowSystemActivity:(id)arg1;

@end

