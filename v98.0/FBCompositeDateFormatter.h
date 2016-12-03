/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDateFormatter.h>

@class FBDateFormatter;

@interface FBCompositeDateFormatter : FBDateFormatter {

	FBDateFormatter* _formatterA;
	FBDateFormatter* _formatterB;
	/*^block*/id _formatBlock;

}

@property (nonatomic,readonly) FBDateFormatter * formatterA;              //@synthesize formatterA=_formatterA - In the implementation block
@property (nonatomic,readonly) FBDateFormatter * formatterB;              //@synthesize formatterB=_formatterB - In the implementation block
@property (nonatomic,readonly) id formatBlock;                            //@synthesize formatBlock=_formatBlock - In the implementation block
-(id)initWithFormatterA:(id)arg1 formatterB:(id)arg2 formatBlock:(/*^block*/id)arg3 ;
-(FBDateFormatter *)formatterA;
-(FBDateFormatter *)formatterB;
-(id)formatBlock;
-(void)setClock:(id)arg1 ;
-(id)formatDate:(id)arg1 ;
@end

