/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCheckoutExplanationInfoViewModel;

@interface FBPaymentsCheckoutExplanationInfoConfiguration : FBValueObject <NSCopying> {

	unsigned long long _displayPolicy;
	FBPaymentsCheckoutExplanationInfoViewModel* _viewModel;

}

@property (nonatomic,readonly) unsigned long long displayPolicy;                                         //@synthesize displayPolicy=_displayPolicy - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCheckoutExplanationInfoViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(unsigned long long)displayPolicy;
-(id)initWithDisplayPolicy:(unsigned long long)arg1 viewModel:(id)arg2 ;
-(FBPaymentsCheckoutExplanationInfoViewModel *)viewModel;
@end

