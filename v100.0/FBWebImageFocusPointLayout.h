/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageViewLayoutDelegate.h>

@class NSString;

@interface FBWebImageFocusPointLayout : NSObject <FBWebImageViewLayoutDelegate> {

	CGPoint _focusPoint;

}

@property (nonatomic,readonly) CGPoint focusPoint;                  //@synthesize focusPoint=_focusPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFocusPoint:(CGPoint)arg1 ;
-(CGRect)imageView:(id)arg1 contentRectInsideMaskView:(id)arg2 imageSize:(CGSize)arg3 ;
-(NSString *)description;
-(CGPoint)focusPoint;
@end
