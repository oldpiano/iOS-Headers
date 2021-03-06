/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Social/SLService.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSSet, NSString;

@interface SLRemoteService : SLService <NSSecureCoding>
{
    int _maximumVideoCount;
    BOOL _serviceRegionTargetIsChina;
    BOOL _addDeviceClassToRequest;
    NSString *_xpcServiceIdentifier;
    NSString *_serviceTypeIdentifier;
    NSString *_accountTypeIdentifier;
    NSString *_localizedServiceName;
    NSString *_activityViewIconResourceName;
    int _authenticationStyle;
    int _maximumURLCount;
    int _maximumImageCount;
    int _maximumImageDataSize;
    int _maximumVideoDataSize;
    int _maximumVideoTimeLimit;
    NSSet *_supportedImageAssetURLSchemes;
    NSSet *_supportedVideoAssetURLSchemes;
    NSString *_shareSheetHostingBundleIdentifier;
    NSString *_shareSheetClassName;
    NSData *_activityImageData;
}

+ (id)remoteServiceForTypeIdentifier:(id)arg1;
+ (id)remoteServices;
+ (id)_cachedServiceWithType:(id)arg1;
+ (id)_cachedServices;
+ (BOOL)supportsSecureCoding;
@property(retain) NSData *activityImageData; // @synthesize activityImageData=_activityImageData;
@property(retain) NSString *shareSheetClassName; // @synthesize shareSheetClassName=_shareSheetClassName;
@property(retain) NSString *shareSheetHostingBundleIdentifier; // @synthesize shareSheetHostingBundleIdentifier=_shareSheetHostingBundleIdentifier;
@property BOOL addDeviceClassToRequest; // @synthesize addDeviceClassToRequest=_addDeviceClassToRequest;
@property(retain) NSSet *supportedVideoAssetURLSchemes; // @synthesize supportedVideoAssetURLSchemes=_supportedVideoAssetURLSchemes;
@property(retain) NSSet *supportedImageAssetURLSchemes; // @synthesize supportedImageAssetURLSchemes=_supportedImageAssetURLSchemes;
@property int maximumVideoTimeLimit; // @synthesize maximumVideoTimeLimit=_maximumVideoTimeLimit;
@property int maximumVideoDataSize; // @synthesize maximumVideoDataSize=_maximumVideoDataSize;
@property int maximumImageDataSize; // @synthesize maximumImageDataSize=_maximumImageDataSize;
@property int maximumImageCount; // @synthesize maximumImageCount=_maximumImageCount;
@property int maximumURLCount; // @synthesize maximumURLCount=_maximumURLCount;
@property int authenticationStyle; // @synthesize authenticationStyle=_authenticationStyle;
@property BOOL serviceRegionTargetIsChina; // @synthesize serviceRegionTargetIsChina=_serviceRegionTargetIsChina;
@property(retain) NSString *activityViewIconResourceName; // @synthesize activityViewIconResourceName=_activityViewIconResourceName;
@property(retain) NSString *localizedServiceName; // @synthesize localizedServiceName=_localizedServiceName;
@property(retain) NSString *accountTypeIdentifier; // @synthesize accountTypeIdentifier=_accountTypeIdentifier;
@property(retain) NSString *serviceTypeIdentifier; // @synthesize serviceTypeIdentifier=_serviceTypeIdentifier;
@property(retain) NSString *xpcServiceIdentifier; // @synthesize xpcServiceIdentifier=_xpcServiceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) int maximumVideoCount; // @dynamic maximumVideoCount;
- (id)description;
- (id)composeViewController;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)_isSupportedURL:(id)arg1 withSupportedSchemes:(id)arg2;
- (BOOL)supportsVideoURL:(id)arg1;
- (BOOL)supportsImageURL:(id)arg1;
- (BOOL)isFirstClassService;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (id)connectionName;
- (id)serviceType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_activityImageDataForImageResourceName:(id)arg1 inBundle:(id)arg2;
- (id)_setFromArrayWithKey:(id)arg1 inDictionary:(id)arg2;
- (int)_authenticationStyleFromAuthenticationStyleIdentifier:(id)arg1;
- (BOOL)_isValidAuthenicationStyleIdentifier:(id)arg1;
- (id)_encodableStringProperties;
- (id)_authenticationStyleIdentifierMappings;
- (id)integerPropertyKeyMappings;
- (id)_requiredInfoDictKeys;
- (BOOL)infoDictHasRequiredKeys:(id)arg1;
- (id)initWithServiceBundle:(id)arg1 socialInfoDictionary:(id)arg2;

@end

