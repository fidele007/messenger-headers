/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class MNMessageCellLayoutInjector;

@interface MNMessegeFullBleedCellLayout : NSObject {

	MNMessageCellLayoutInjector* _injector;

}
-(id)layoutElementsForMessageRow:(id)arg1 viewportSize:(CGSize)arg2 ;
-(id)layoutSpecForMessageRow:(id)arg1 viewportSize:(CGSize)arg2 ;
-(id)initWithMessageCellLayoutInjector:(id)arg1 ;
-(id)_bubbleSizesForMessageRow:(id)arg1 bubbleContentInsets:(UIEdgeInsets)arg2 showsAttributionOnTop:(BOOL)arg3 maxMessageSize:(CGSize)arg4 ;
-(CGSize)_photoSizeForMessageRow:(id)arg1 maxMessageSize:(CGSize)arg2 ;
-(CGSize)_videoSizeForMessageRow:(id)arg1 maxMessageSize:(CGSize)arg2 ;
-(CGSize)_attributionSizeForMessageRow:(id)arg1 maxMessageSize:(CGSize)arg2 ;
-(CGSize)_textSizeForMessageCoreViewModel:(id)arg1 maxMessageSize:(CGSize)arg2 ;
@end

