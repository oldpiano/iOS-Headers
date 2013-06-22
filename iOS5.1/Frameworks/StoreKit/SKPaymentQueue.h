/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface SKPaymentQueue : NSObject
{
    id _internal;
}

+ (BOOL)canMakePayments;
+ (id)defaultQueue;
- (void)_unregisterForNotifications;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_registerForNotificationsIfNeeded;
- (void)_registerForNotifications;
- (void)_processUpdates:(id)arg1 trimUnmatched:(BOOL)arg2;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_notifyObserversAboutChanges:(id)arg1;
- (id)_copyTransactionsFromNotification:(id)arg1;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (void)_addLocalTransactionForPayment:(id)arg1;
- (void)_transactionUpdatedNotification:(id)arg1;
- (void)_transactionsRemovedNotification:(id)arg1;
- (void)_transactionsRefreshedNotification:(id)arg1;
- (void)_transactionsAddedNotification:(id)arg1;
- (void)_restoreTransactionsFinishedNotification:(id)arg1;
- (void)_restoreTransactionsFailedNotification:(id)arg1;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_daemonLaunchedNotification;
- (void)_daemonExited:(id)arg1;
- (void)_applicationBecameActiveNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *transactions;
- (void)restoreCompletedTransactions;
- (void)removeTransactionObserver:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)dealloc;
- (id)init;

@end
