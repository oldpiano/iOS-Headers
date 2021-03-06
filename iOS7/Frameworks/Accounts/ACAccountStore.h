/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface ACAccountStore : NSObject
{
    NSXPCConnection *_connection;
    NSString *_clientBundleID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _shouldSendClientState;
    BOOL _notificationsEnabled;
    id <ACDAccountStoreProtocol> _remoteAccountStore;
}

+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
@property(retain, nonatomic) id <ACDAccountStoreProtocol> remoteAccountStore; // @synthesize remoteAccountStore=_remoteAccountStore;
@property(readonly) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_clientBundleID;
- (void).cxx_destruct;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)promptUserForCredentialsWithAccount:(id)arg1 withHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id)arg3;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(id)arg4;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)_saveAccount:(id)arg1 forPID:(id)arg2 verify:(BOOL)arg3 dataclassActions:(id)arg4 completion:(id)arg5;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withCompletionHandler:(id)arg3;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountDataclass:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (id)accountsWithAccountType:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)disconnectFromRemoteAccountStore;
- (void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)_remoteAccountStore;
- (void)dealloc;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)init;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;

@end

