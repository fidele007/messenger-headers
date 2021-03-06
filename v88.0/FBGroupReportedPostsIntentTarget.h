/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBGroupReportedPostsIntentTarget : FBIntentTarget {

	BOOL _showGroupContextHeader;
	NSString* _FBID;
	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * FBID;                     //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL showGroupContextHeader;              //@synthesize showGroupContextHeader=_showGroupContextHeader - In the implementation block
+(id)groupReportedPostsTargetWithFBID:(id)arg1 source:(id)arg2 showGroupContextHeader:(BOOL)arg3 ;
-(id)fallbackURLs;
-(NSString *)FBID;
-(BOOL)showGroupContextHeader;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)source;
@end

