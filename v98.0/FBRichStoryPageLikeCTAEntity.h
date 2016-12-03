/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntity.h>
#import <Messenger/FBRichStoryEntityUpdatable.h>

@class BFTask, NSString, NSURL, NSArray;

@interface FBRichStoryPageLikeCTAEntity : NSObject <FBRichStoryEntity, FBRichStoryEntityUpdatable> {

	BFTask* _didUpdateTask;
	NSString* _pageName;
	NSURL* _pageProfilePictureURL;
	NSString* _socialContext;
	NSArray* _friendsWhoLikeProfilePictureURLs;
	NSString* _CTATitle;
	/*^block*/id _CTAAction;
	/*^block*/id _logViewedAction;

}

@property (nonatomic,copy,readonly) NSString * pageName;                                     //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,readonly) NSURL * pageProfilePictureURL;                                //@synthesize pageProfilePictureURL=_pageProfilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialContext;                                //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendsWhoLikeProfilePictureURLs;              //@synthesize friendsWhoLikeProfilePictureURLs=_friendsWhoLikeProfilePictureURLs - In the implementation block
@property (nonatomic,copy,readonly) NSString * CTATitle;                                     //@synthesize CTATitle=_CTATitle - In the implementation block
@property (nonatomic,copy,readonly) id CTAAction;                                            //@synthesize CTAAction=_CTAAction - In the implementation block
@property (nonatomic,copy,readonly) id logViewedAction;                                      //@synthesize logViewedAction=_logViewedAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BFTask * didUpdateTask;                                       //@synthesize didUpdateTask=_didUpdateTask - In the implementation block
-(NSString *)pageName;
-(BFTask *)didUpdateTask;
-(NSString *)socialContext;
-(NSURL *)pageProfilePictureURL;
-(id)logViewedAction;
-(NSArray *)friendsWhoLikeProfilePictureURLs;
-(NSString *)CTATitle;
-(id)CTAAction;
-(void)_pageDidUpdate:(id)arg1 handle:(id)arg2 ;
-(id)initWithPageName:(id)arg1 pageProfilePictureURL:(id)arg2 socialContext:(id)arg3 friendsWhoLikeProfilePictureURLs:(id)arg4 CTATitle:(id)arg5 CTAAction:(/*^block*/id)arg6 logViewedAction:(/*^block*/id)arg7 didUpdateTask:(id)arg8 ;
@end

