/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, XPCProxy<CKSMSCompose>;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject
{
    NSMutableArray *_queuedInvocations;
    XPCProxy<CKSMSCompose> *_serviceViewControllerProxy;
}

@property(retain, nonatomic) XPCProxy<CKSMSCompose> *serviceViewControllerProxy; // @synthesize serviceViewControllerProxy=_serviceViewControllerProxy;
@property(retain, nonatomic) NSMutableArray *queuedInvocations; // @synthesize queuedInvocations=_queuedInvocations;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end

