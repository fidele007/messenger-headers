/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNNullStateViewModel : FBValueObject <NSCopying> {

	NSString* _titleString;
	NSString* _subtitleString;
	NSString* _callToAction;

}

@property (nonatomic,copy,readonly) NSString * titleString;                 //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleString;              //@synthesize subtitleString=_subtitleString - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToAction;                //@synthesize callToAction=_callToAction - In the implementation block
-(id)initWithTitleString:(id)arg1 subtitleString:(id)arg2 callToAction:(id)arg3 ;
-(NSString *)callToAction;
-(NSString *)subtitleString;
-(NSString *)titleString;
@end
