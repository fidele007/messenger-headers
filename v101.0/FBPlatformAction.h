/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlatformActionDelegate, FBPlatformURLOpening;
@class FBExceptionHandler, NSMutableDictionary, NSString, UIImage, NSDictionary, FBUserSession, FBPlatformAppBridgeTypeToJSONConverter, NSURL;

@interface FBPlatformAction : NSObject {

	FBExceptionHandler* _exceptionHandler;
	BOOL _isCompleted;
	NSMutableDictionary* _resultBridgeArguments;
	NSString* _actionIDForLogOnly;
	NSString* _appFBID;
	UIImage* _appIcon;
	NSString* _appName;
	NSString* _appSchemeSuffix;
	NSDictionary* _arguments;
	NSDictionary* _bridgeArguments;
	id<FBPlatformActionDelegate> _delegate;
	NSString* _method;
	FBUserSession* _session;
	NSString* _sourceApplication;
	NSString* _version;
	NSDictionary* _webViewArguments;
	NSDictionary* _trackingInfo;
	FBPlatformAppBridgeTypeToJSONConverter* _appBridgeTypeConverter;
	NSString* _cipherKey;
	id<FBPlatformURLOpening> _platformURLOpener;
	NSURL* _uncaughtExceptionResponseURL;
	NSString* _identitySafeForEqualityCheck;

}

@property (nonatomic,retain) FBPlatformAppBridgeTypeToJSONConverter * appBridgeTypeConverter;              //@synthesize appBridgeTypeConverter=_appBridgeTypeConverter - In the implementation block
@property (nonatomic,copy) NSDictionary * bridgeArguments;                                                 //@synthesize bridgeArguments=_bridgeArguments - In the implementation block
@property (nonatomic,copy) NSString * cipherKey;                                                           //@synthesize cipherKey=_cipherKey - In the implementation block
@property (nonatomic,retain) id<FBPlatformURLOpening> platformURLOpener;                                   //@synthesize platformURLOpener=_platformURLOpener - In the implementation block
@property (nonatomic,retain) NSURL * uncaughtExceptionResponseURL;                                         //@synthesize uncaughtExceptionResponseURL=_uncaughtExceptionResponseURL - In the implementation block
@property (nonatomic,copy) NSDictionary * webViewArguments;                                                //@synthesize webViewArguments=_webViewArguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * identitySafeForEqualityCheck;                               //@synthesize identitySafeForEqualityCheck=_identitySafeForEqualityCheck - In the implementation block
@property (nonatomic,copy) NSString * actionIDForLogOnly;                                                  //@synthesize actionIDForLogOnly=_actionIDForLogOnly - In the implementation block
@property (nonatomic,copy) NSString * appFBID;                                                             //@synthesize appFBID=_appFBID - In the implementation block
@property (nonatomic,retain) UIImage * appIcon;                                                            //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,copy) NSString * appName;                                                             //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * appSchemeSuffix;                                                     //@synthesize appSchemeSuffix=_appSchemeSuffix - In the implementation block
@property (nonatomic,copy) NSDictionary * arguments;                                                       //@synthesize arguments=_arguments - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                                          //@synthesize isCompleted=_isCompleted - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (assign,nonatomic,__weak) id<FBPlatformActionDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * method;                                                              //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                                                   //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (nonatomic,copy) NSString * version;                                                             //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDictionary * trackingInfo;                                                    //@synthesize trackingInfo=_trackingInfo - In the implementation block
+(id)singleUsePlatformURLOpener;
+(void)registerSingleUsePlatformURLOpener:(id)arg1 ;
-(id)initWithURL:(id)arg1 session:(id)arg2 sourceApplication:(id)arg3 version:(id)arg4 ;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 session:(id)arg2 sourceApplication:(id)arg3 version:(id)arg4 exceptionHandler:(id)arg5 ;
-(NSString *)appFBID;
-(void)completeWithArguments:(id)arg1 ;
-(void)setAppBridgeTypeConverter:(FBPlatformAppBridgeTypeToJSONConverter *)arg1 ;
-(void)setPlatformURLOpener:(id<FBPlatformURLOpening>)arg1 ;
-(void)setAppFBID:(NSString *)arg1 ;
-(void)setAppSchemeSuffix:(NSString *)arg1 ;
-(id)_dictionaryFromJSONString:(id)arg1 ;
-(void)setBridgeArguments:(NSDictionary *)arg1 ;
-(NSDictionary *)bridgeArguments;
-(void)setActionIDForLogOnly:(NSString *)arg1 ;
-(void)setTrackingInfo:(NSDictionary *)arg1 ;
-(void)setCipherKey:(NSString *)arg1 ;
-(NSString *)appSchemeSuffix;
-(void)setWebViewArguments:(NSDictionary *)arg1 ;
-(id)_responseURLWithArguments:(id)arg1 error:(id)arg2 ;
-(void)setUncaughtExceptionResponseURL:(NSURL *)arg1 ;
-(id)_responseURLWithArguments:(id)arg1 errorArguments:(id)arg2 cipherKey:(id)arg3 ;
-(NSString *)actionIDForLogOnly;
-(void)_exceptionBlockHelper;
-(void)_openPlatformURL:(id)arg1 actionDidComplete:(BOOL)arg2 ;
-(NSString *)identitySafeForEqualityCheck;
-(void)_completeWithArguments:(id)arg1 errorArguments:(id)arg2 ;
-(void)completeWithErrorArguments:(id)arg1 ;
-(id)_responseURLWithArguments:(id)arg1 errorArguments:(id)arg2 ;
-(NSString *)cipherKey;
-(id)_jsonStringFromDictionary:(id)arg1 excludeBinaryData:(BOOL)arg2 ;
-(id)_encryptedQueryParamsWithPayload:(id)arg1 symmetricKey:(id)arg2 ;
-(void)completeWithErrorForUncaughtException;
-(NSDictionary *)webViewArguments;
-(NSDictionary *)trackingInfo;
-(FBPlatformAppBridgeTypeToJSONConverter *)appBridgeTypeConverter;
-(id<FBPlatformURLOpening>)platformURLOpener;
-(NSURL *)uncaughtExceptionResponseURL;
-(void)completeWithError:(id)arg1 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<FBPlatformActionDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<FBPlatformActionDelegate>)delegate;
-(BOOL)isCompleted;
-(NSString *)contentType;
-(NSString *)method;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)_cleanUp;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSDictionary *)arguments;
-(NSString *)appName;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
@end

