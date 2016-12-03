/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, UIImage;

@interface FBFacepileItem : FBValueObject <NSCopying> {

	NSURL* _imageURL;
	NSString* _imageAccessibilitylabel;
	double _imageOpacity;
	UIImage* _overlayImage;
	NSString* _overlayImageAccessibilitylabel;
	NSString* _itemID;
	CGRect _overlayImageRect;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageAccessibilitylabel;                     //@synthesize imageAccessibilitylabel=_imageAccessibilitylabel - In the implementation block
@property (nonatomic,readonly) double imageOpacity;                                         //@synthesize imageOpacity=_imageOpacity - In the implementation block
@property (nonatomic,copy,readonly) UIImage * overlayImage;                                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * overlayImageAccessibilitylabel;              //@synthesize overlayImageAccessibilitylabel=_overlayImageAccessibilitylabel - In the implementation block
@property (nonatomic,readonly) CGRect overlayImageRect;                                     //@synthesize overlayImageRect=_overlayImageRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                      //@synthesize itemID=_itemID - In the implementation block
-(id)initWithImageURL:(id)arg1 imageAccessibilitylabel:(id)arg2 ;
-(id)initWithImageURL:(id)arg1 imageAccessibilitylabel:(id)arg2 imageOpacity:(double)arg3 overlayImage:(id)arg4 overlayImageAccessibilitylabel:(id)arg5 overlayImageRect:(CGRect)arg6 itemID:(id)arg7 ;
-(id)initWithImageURL:(id)arg1 imageAccessibilitylabel:(id)arg2 opacity:(double)arg3 itemID:(id)arg4 ;
-(NSString *)imageAccessibilitylabel;
-(double)imageOpacity;
-(NSString *)overlayImageAccessibilitylabel;
-(CGRect)overlayImageRect;
-(UIImage *)overlayImage;
-(NSString *)itemID;
-(NSURL *)imageURL;
@end

