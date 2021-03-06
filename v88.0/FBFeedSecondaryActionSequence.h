/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedFeedUnitFieldsProtocol;
@class NSDictionary, FBMemModelObject, NSArray, FBFeedSecondaryActionContext;

@interface FBFeedSecondaryActionSequence : NSObject {

	NSDictionary* _handlers;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	id _element;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _context;

}
-(id)generateAll;
-(id)initWithHandlers:(id)arg1 feedUnit:(id)arg2 element:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(BOOL)hasActions;
@end

