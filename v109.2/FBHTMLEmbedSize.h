/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBHTMLEmbedSize : NSObject {

	double _scaleFactor;
	CGSize _contentSize;
	CGSize _boundsSize;

}

@property (assign,nonatomic) CGSize contentSize;               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize boundsSize;                //@synthesize boundsSize=_boundsSize - In the implementation block
@property (assign,nonatomic) double scaleFactor;               //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) CGSize scaledSize; 
+(id)zeroSize;
+(id)sizeWithContentSize:(CGSize)arg1 boundsSize:(CGSize)arg2 scaleFactor:(double)arg3 ;
-(CGSize)boundsSize;
-(void)setBoundsSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)description;
-(CGSize)scaledSize;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
@end

