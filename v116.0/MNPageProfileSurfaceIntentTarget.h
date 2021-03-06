/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBIntentTarget.h>

@class NSString, NSURL;

@interface MNPageProfileSurfaceIntentTarget : FBIntentTarget {

	NSString* _pageID;
	NSString* _pageName;
	NSURL* _pageIconURL;

}

@property (nonatomic,copy) NSString * pageID;                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy) NSString * pageName;              //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy) NSURL * pageIconURL;              //@synthesize pageIconURL=_pageIconURL - In the implementation block
+(id)pageProfileSurfaceIntentTargetWithPageID:(id)arg1 pageName:(id)arg2 pageIconURL:(id)arg3 ;
-(void)setPageName:(NSString *)arg1 ;
-(NSURL *)pageIconURL;
-(void)setPageIconURL:(NSURL *)arg1 ;
-(id)fallbackURLs;
-(NSString *)pageName;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
@end

