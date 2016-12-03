/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMemModelObject;

@interface FBVideoChannelViewControllerChannelConfig : NSObject {

	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _channel;
	long long _section;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long section;                                                           //@synthesize section=_section - In the implementation block
-(id)initWithChannel:(id)arg1 section:(long long)arg2 ;
-(long long)section;
-(void)setSection:(long long)arg1 ;
-(void)setChannel:(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)arg1 ;
-(FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol>)channel;
@end
