/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

