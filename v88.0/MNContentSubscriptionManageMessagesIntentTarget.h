/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSURL;

@interface MNContentSubscriptionManageMessagesIntentTarget : FBIntentTarget {

	BOOL _showsTopicsOnly;
	NSString* _pageID;
	NSURL* _fallbackURL;

}

@property (nonatomic,copy,readonly) NSString * pageID;                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;              //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (assign,nonatomic) BOOL showsTopicsOnly;                    //@synthesize showsTopicsOnly=_showsTopicsOnly - In the implementation block
+(id)manageMessagesTargetWithPageID:(id)arg1 fallbackURL:(id)arg2 showsTopicsOnly:(BOOL)arg3 ;
-(BOOL)showsTopicsOnly;
-(id)fallbackURLs;
-(id)initWithPageID:(id)arg1 fallbackURL:(id)arg2 showsTopicsOnly:(BOOL)arg3 ;
-(void)setShowsTopicsOnly:(BOOL)arg1 ;
-(id)description;
-(NSString *)pageID;
-(NSURL *)fallbackURL;
@end

