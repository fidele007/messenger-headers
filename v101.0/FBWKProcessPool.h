/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewAnalytics;
@class NSMutableArray, NSDate, WKProcessPool;

@interface FBWKProcessPool : NSObject {

	NSMutableArray* _completionHandlers;
	id<FBWebViewAnalytics> _analytics;
	BOOL _initialized;
	BOOL _invalidated;
	NSDate* _createTime;
	WKProcessPool* _wkProcessPool;

}

@property (nonatomic,readonly) WKProcessPool * wkProcessPool;              //@synthesize wkProcessPool=_wkProcessPool - In the implementation block
+(id)wkProcessPoolForContainer:(id)arg1 analytics:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)resetProcessPool:(id)arg1 ;
+(void)mayResetProcessPool:(id)arg1 withResetInterval:(long long)arg2 ;
-(WKProcessPool *)wkProcessPool;
-(id)init;
-(void)invalidate;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
@end
