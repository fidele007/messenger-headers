/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMenuButtonItem : NSObject {

	NSString* _title;
	/*^block*/id _action;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id action;                     //@synthesize action=_action - In the implementation block
+(id)buttonItemWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(NSString *)title;
-(void)setAction:(id)arg1 ;
@end

