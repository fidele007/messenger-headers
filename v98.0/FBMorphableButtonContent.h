/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMorphableButtonContent : NSObject {

	NSString* _title;
	unsigned long long _glyphName;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;              //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) id actionBlock;                            //@synthesize actionBlock=_actionBlock - In the implementation block
-(id)initWithTitle:(id)arg1 glyphName:(unsigned long long)arg2 actionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)glyphName;
-(NSString *)title;
-(id)actionBlock;
@end

