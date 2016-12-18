/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerAlbumPublishButtonTextBehaviour : FBValueObject <NSCopying, NSCoding> {

	NSString* _buttonTitleWhenPublishingToAlbum;
	NSString* _buttonTitleWhenNotPublishingToAlbum;

}

@property (nonatomic,copy,readonly) NSString * buttonTitleWhenPublishingToAlbum;                 //@synthesize buttonTitleWhenPublishingToAlbum=_buttonTitleWhenPublishingToAlbum - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitleWhenNotPublishingToAlbum;              //@synthesize buttonTitleWhenNotPublishingToAlbum=_buttonTitleWhenNotPublishingToAlbum - In the implementation block
-(id)initWithButtonTitleWhenPublishingToAlbum:(id)arg1 buttonTitleWhenNotPublishingToAlbum:(id)arg2 ;
-(NSString *)buttonTitleWhenPublishingToAlbum;
-(NSString *)buttonTitleWhenNotPublishingToAlbum;
@end
