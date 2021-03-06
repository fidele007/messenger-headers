/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerPostContentTypePublishButtonTextBehaviour : FBValueObject <NSCopying, NSCoding> {

	NSString* _titleForPublishingPost;
	NSString* _titleForSchedulingPost;
	NSString* _titleForBackdatePost;
	NSString* _titleForDraftPost;

}

@property (nonatomic,copy,readonly) NSString * titleForPublishingPost;              //@synthesize titleForPublishingPost=_titleForPublishingPost - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForSchedulingPost;              //@synthesize titleForSchedulingPost=_titleForSchedulingPost - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForBackdatePost;                //@synthesize titleForBackdatePost=_titleForBackdatePost - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForDraftPost;                   //@synthesize titleForDraftPost=_titleForDraftPost - In the implementation block
-(id)initWithTitleForPublishingPost:(id)arg1 titleForSchedulingPost:(id)arg2 titleForBackdatePost:(id)arg3 titleForDraftPost:(id)arg4 ;
-(NSString *)titleForPublishingPost;
-(NSString *)titleForSchedulingPost;
-(NSString *)titleForBackdatePost;
-(NSString *)titleForDraftPost;
@end

