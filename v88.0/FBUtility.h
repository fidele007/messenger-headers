/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBUtility : NSObject
+(id)attributionID;
+(id)queryParamsDictionaryFromFBURL:(id)arg1 ;
+(BOOL)isRetinaDisplay;
+(unsigned long long)currentTimeInMilliseconds;
+(id)facebookSDKBundle;
+(id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 inBundle:(id)arg3 ;
+(BOOL)isPublishPermission:(id)arg1 ;
+(BOOL)isFetchedFBAppSettingsStale;
+(id)_parseDialogConfigs:(id)arg1 ;
+(void)callTheFetchAppSettingsCallback:(/*^block*/id)arg1 ;
+(void)fetchAppSettings:(id)arg1 callback:(/*^block*/id)arg2 ;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(id)simpleJSONEncode:(id)arg1 ;
+(id)simpleJSONDecode:(id)arg1 ;
+(id)advertiserOrAnonymousID:(BOOL)arg1 ;
+(unsigned long long)advertisingTrackingStatus;
+(id)simpleJSONEncode:(id)arg1 error:(id*)arg2 writingOptions:(unsigned long long)arg3 ;
+(id)simpleJSONDecode:(id)arg1 error:(id*)arg2 ;
+(id)dictionaryByParsingURLQueryPart:(id)arg1 ;
+(id)stringByURLDecodingString:(id)arg1 ;
+(id)stringByURLEncodingString:(id)arg1 ;
+(id)buildFacebookUrlWithPre:(id)arg1 post:(id)arg2 version:(id)arg3 ;
+(id)buildFacebookUrlWithPre:(id)arg1 withPost:(id)arg2 ;
+(id)dialogBaseURL;
+(id)graphObjectInArray:(id)arg1 withSameIDAs:(id)arg2 ;
+(id)stringFBIDFromObject:(id)arg1 ;
+(void)centerView:(id)arg1 tableView:(id)arg2 ;
+(double)randomTimeInterval:(double)arg1 withMaxValue:(double)arg2 ;
+(id)expirationDateFromExpirationUnixTimeString:(id)arg1 ;
+(id)expirationDateFromExpirationTimeIntervalString:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 ;
+(BOOL)isFacebookBundleIdentifier:(id)arg1 ;
+(BOOL)isSafariBundleIdentifier:(id)arg1 ;
+(BOOL)areAllPermissionsReadPermissions:(id)arg1 ;
+(void)addBasicInfoPermission:(id)arg1 ;
+(id)fetchedAppSettings;
+(id)newUUIDString;
+(id)activityParametersDictionaryForEvent:(id)arg1 includeAttributionID:(BOOL)arg2 implicitEventsOnly:(BOOL)arg3 shouldAccessAdvertisingID:(BOOL)arg4 ;
+(id)stringBySerializingQueryParameters:(id)arg1 ;
+(id)stringAppBaseUrlFromAppId:(id)arg1 urlSchemeSuffix:(id)arg2 ;
+(id)buildFacebookUrlWithPre:(id)arg1 ;
+(BOOL)isRegisteredURLScheme:(id)arg1 ;
+(BOOL)isUIKitLinkedOnOrAfter:(long long)arg1 ;
+(BOOL)isRunningOnOrAfter:(long long)arg1 ;
+(BOOL)isSystemAccountStoreAvailable;
+(void)deleteFacebookCookies;
+(BOOL)isMultitaskingSupported;
@end

