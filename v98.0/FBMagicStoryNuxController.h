/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxController.h>

@protocol FBMagicStoryNuxControllerDelegate;
@interface FBMagicStoryNuxController : FBNuxController {

	id<FBMagicStoryNuxControllerDelegate> _magicStoryNuxDelegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryNuxControllerDelegate> magicStoryNuxDelegate;              //@synthesize magicStoryNuxDelegate=_magicStoryNuxDelegate - In the implementation block
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(id<FBMagicStoryNuxControllerDelegate>)magicStoryNuxDelegate;
-(void)setMagicStoryNuxDelegate:(id<FBMagicStoryNuxControllerDelegate>)arg1 ;
@end

