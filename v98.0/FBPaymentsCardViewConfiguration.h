/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, FBPaymentsCard, FBPaymentsCardOption;

@interface FBPaymentsCardViewConfiguration : FBValueObject <NSCopying> {

	NSDictionary* _configurationsForIdentifiers;
	NSNumber* _shouldShowActionButtons;
	long long _presentingMode;
	FBPaymentsCard* _card;
	FBPaymentsCardOption* _acceptedCardOption;

}

@property (nonatomic,copy,readonly) NSDictionary * configurationsForIdentifiers;              //@synthesize configurationsForIdentifiers=_configurationsForIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * shouldShowActionButtons;                       //@synthesize shouldShowActionButtons=_shouldShowActionButtons - In the implementation block
@property (nonatomic,readonly) long long presentingMode;                                      //@synthesize presentingMode=_presentingMode - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCard * card;                                    //@synthesize card=_card - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCardOption * acceptedCardOption;                //@synthesize acceptedCardOption=_acceptedCardOption - In the implementation block
-(id)initWithConfigurationsForIdentifiers:(id)arg1 shouldShowActionButtons:(id)arg2 presentingMode:(long long)arg3 card:(id)arg4 acceptedCardOption:(id)arg5 ;
-(NSDictionary *)configurationsForIdentifiers;
-(NSNumber *)shouldShowActionButtons;
-(long long)presentingMode;
-(FBPaymentsCard *)card;
-(FBPaymentsCardOption *)acceptedCardOption;
@end

