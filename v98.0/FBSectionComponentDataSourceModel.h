/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSDictionary;

@interface FBSectionComponentDataSourceModel : NSObject {

	id<NSObject> _model;
	id<NSObject> _context;
	/*^block*/id _componentBlock;
	NSDictionary* _accessoryModel;

}

@property (nonatomic,copy,readonly) NSDictionary * accessoryModel;              //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id componentBlock;                          //@synthesize componentBlock=_componentBlock - In the implementation block
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 ;
-(id)componentBlock;
-(NSDictionary *)accessoryModel;
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 accessoryModel:(id)arg4 ;
-(id)description;
-(id<NSObject>)context;
-(id<NSObject>)model;
@end
