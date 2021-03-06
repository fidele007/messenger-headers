/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL, NSString;

@interface FBMessageShareIntentTarget : FBIntentTarget {

	BOOL _showPeoplePicker;
	BOOL _showSearchBar;
	NSURL* _link;
	NSString* _FBID;
	NSString* _recipientID;
	NSString* _entryPoint;
	NSString* _fromShareSource;

}

@property (nonatomic,copy,readonly) NSURL * link;                            //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSString * FBID;                         //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientID;                  //@synthesize recipientID=_recipientID - In the implementation block
@property (nonatomic,readonly) NSURL * messengerRedirectURL; 
@property (nonatomic,copy,readonly) NSString * entryPoint;                   //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) BOOL showPeoplePicker;                        //@synthesize showPeoplePicker=_showPeoplePicker - In the implementation block
@property (nonatomic,readonly) BOOL showSearchBar;                           //@synthesize showSearchBar=_showSearchBar - In the implementation block
@property (nonatomic,copy,readonly) NSString * fromShareSource;              //@synthesize fromShareSource=_fromShareSource - In the implementation block
+(id)messageShareTargetForFBID:(id)arg1 ;
+(id)messageShareTargetForLink:(id)arg1 ;
+(id)messageShareTargetForFBID:(id)arg1 recipientID:(id)arg2 showPeoplePicker:(BOOL)arg3 showSearchBar:(BOOL)arg4 fromShareSource:(id)arg5 ;
+(id)messageShareTargetForFBID:(id)arg1 entryPoint:(id)arg2 ;
-(BOOL)showSearchBar;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSURL *)messengerRedirectURL;
-(id)_appendParamsToBaseURL:(id)arg1 ;
-(id)_wildeURL;
-(NSString *)recipientID;
-(BOOL)showPeoplePicker;
-(NSString *)fromShareSource;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)link;
-(NSString *)entryPoint;
@end

