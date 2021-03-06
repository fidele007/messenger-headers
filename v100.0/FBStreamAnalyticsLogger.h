/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAnalytics, NSString;

@interface FBStreamAnalyticsLogger : NSObject <NSCopying> {

	FBAnalytics* _analytics;
	NSString* _analyticsModule;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
-(NSString *)analyticsModule;
-(void)logEvent:(id)arg1 withContext:(id)arg2 extra:(/*^block*/id)arg3 ;
-(id)initWithModule:(id)arg1 ;
-(id)initWithModule:(id)arg1 analytics:(id)arg2 ;
-(/*^block*/id)_extraBlockWithContext:(id)arg1 extra:(/*^block*/id)arg2 ;
-(void)logEvent:(id)arg1 number:(id)arg2 withContext:(id)arg3 extra:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

