/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface FBVideoUploadConfig : FBValueObject <NSCopying, NSCoding> {

	BOOL _notifyWhenProcessed;
	BOOL _useDataCenterRouting;
	BOOL _useNSURLSession;
	NSString* _targetFBID;
	NSString* _userFBID;
	unsigned long long _publishingOption;
	unsigned long long _maxConcurrentUploadRequests;
	NSDictionary* _extraUploadParamsForAllRequests;
	NSDictionary* _extraUploadParamsForStartRequest;
	NSDictionary* _extraUploadParamsForPublishRequest;
	NSString* _containerType;
	NSString* _message;
	long long _maxMediaUploadRetryCount;

}

@property (nonatomic,copy,readonly) NSString * targetFBID;                                          //@synthesize targetFBID=_targetFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userFBID;                                            //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,readonly) unsigned long long publishingOption;                                 //@synthesize publishingOption=_publishingOption - In the implementation block
@property (nonatomic,readonly) unsigned long long maxConcurrentUploadRequests;                      //@synthesize maxConcurrentUploadRequests=_maxConcurrentUploadRequests - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraUploadParamsForAllRequests;                 //@synthesize extraUploadParamsForAllRequests=_extraUploadParamsForAllRequests - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraUploadParamsForStartRequest;                //@synthesize extraUploadParamsForStartRequest=_extraUploadParamsForStartRequest - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraUploadParamsForPublishRequest;              //@synthesize extraUploadParamsForPublishRequest=_extraUploadParamsForPublishRequest - In the implementation block
@property (nonatomic,readonly) BOOL notifyWhenProcessed;                                            //@synthesize notifyWhenProcessed=_notifyWhenProcessed - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerType;                                       //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                             //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL useDataCenterRouting;                                           //@synthesize useDataCenterRouting=_useDataCenterRouting - In the implementation block
@property (nonatomic,readonly) BOOL useNSURLSession;                                                //@synthesize useNSURLSession=_useNSURLSession - In the implementation block
@property (nonatomic,readonly) long long maxMediaUploadRetryCount;                                  //@synthesize maxMediaUploadRetryCount=_maxMediaUploadRetryCount - In the implementation block
-(BOOL)notifyWhenProcessed;
-(NSString *)targetFBID;
-(id)initWithTargetFBID:(id)arg1 userFBID:(id)arg2 publishingOption:(unsigned long long)arg3 maxConcurrentUploadRequests:(unsigned long long)arg4 extraUploadParamsForAllRequests:(id)arg5 extraUploadParamsForStartRequest:(id)arg6 extraUploadParamsForPublishRequest:(id)arg7 notifyWhenProcessed:(BOOL)arg8 containerType:(id)arg9 message:(id)arg10 useDataCenterRouting:(BOOL)arg11 useNSURLSession:(BOOL)arg12 maxMediaUploadRetryCount:(long long)arg13 ;
-(unsigned long long)maxConcurrentUploadRequests;
-(NSDictionary *)extraUploadParamsForAllRequests;
-(NSDictionary *)extraUploadParamsForStartRequest;
-(NSDictionary *)extraUploadParamsForPublishRequest;
-(BOOL)useDataCenterRouting;
-(BOOL)useNSURLSession;
-(long long)maxMediaUploadRetryCount;
-(unsigned long long)publishingOption;
-(NSString *)userFBID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)message;
-(NSString *)containerType;
@end

