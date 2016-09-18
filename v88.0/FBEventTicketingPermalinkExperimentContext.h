/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBEventTicketingPermalinkExperimentContext : FBExperimentContext {

	BOOL _showOffsiteLinkInFlow;
	BOOL _showPriceInCTA;
	NSString* _paidTicketsCTAText;
	NSString* _freeTicketsCTAText;
	NSString* _freeAndPaidTicketsCTAText;

}

@property (nonatomic,readonly) BOOL showOffsiteLinkInFlow;                             //@synthesize showOffsiteLinkInFlow=_showOffsiteLinkInFlow - In the implementation block
@property (nonatomic,readonly) BOOL showPriceInCTA;                                    //@synthesize showPriceInCTA=_showPriceInCTA - In the implementation block
@property (nonatomic,copy,readonly) NSString * paidTicketsCTAText;                     //@synthesize paidTicketsCTAText=_paidTicketsCTAText - In the implementation block
@property (nonatomic,copy,readonly) NSString * freeTicketsCTAText;                     //@synthesize freeTicketsCTAText=_freeTicketsCTAText - In the implementation block
@property (nonatomic,copy,readonly) NSString * freeAndPaidTicketsCTAText;              //@synthesize freeAndPaidTicketsCTAText=_freeAndPaidTicketsCTAText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)showOffsiteLinkInFlow;
-(BOOL)showPriceInCTA;
-(NSString *)paidTicketsCTAText;
-(NSString *)freeTicketsCTAText;
-(NSString *)freeAndPaidTicketsCTAText;
@end
