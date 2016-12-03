/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURL, UIImage;

@interface FBImageModel : NSObject {

	NSURL* _source;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSURL * source;               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                  //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
@end

