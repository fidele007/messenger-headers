/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemModelObject;

@interface MNThreadContextLoadResult : NSObject {

	FBMemModelObject* _contextGraphResponse;
	double _createdTime;

}

@property (nonatomic,readonly) FBMemModelObject * contextGraphResponse;              //@synthesize contextGraphResponse=_contextGraphResponse - In the implementation block
@property (nonatomic,readonly) double createdTime;                                   //@synthesize createdTime=_createdTime - In the implementation block
-(double)createdTime;
-(id)initWithContextGraphResponse:(id)arg1 ;
-(FBMemModelObject *)contextGraphResponse;
@end

