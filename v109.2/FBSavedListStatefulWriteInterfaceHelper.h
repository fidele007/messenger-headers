/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBSavedListStatefulWriteInterface;

@interface FBSavedListStatefulWriteInterfaceHelper : NSObject {

	FBSavedListStatefulWriteInterface* _statefulWriteInterface;

}
-(id)_chronologicalItemsForStatefulWriteInterface;
-(id)_sortedArrayForSavedDataModelItems:(id)arg1 addedToSortedArray:(id)arg2 isEdgeUpdate:(BOOL)arg3 ;
-(Changeset*)_changesetForSortedDataModelArray:(id)arg1 originalNotifItems:(id)arg2 mutableNotifItems:(id)arg3 ;
-(id)_sortedArrayForSavedDataModelArray:(id)arg1 ;
-(long long)_itemSectionForItem:(id)arg1 ;
-(id)initWithStatefulWriteInterface:(id)arg1 ;
-(Changeset*)computeChangesetForAddedEdges:(id)arg1 originalNotifItems:(id)arg2 mutableNotifItems:(id)arg3 ;
-(Changeset*)computeChangesetForRemovedEdges:(id)arg1 ;
-(Changeset*)computeChangesetForReplacingItemsWithEdges:(id)arg1 ;
-(Changeset*)computeChangesetForUpdatedTimestamps;
-(Changeset*)computeChangesetForUpdatedEdges:(id)arg1 ;
-(long long)numberOfItems;
-(id)titleForHeaderInSection:(long long)arg1 ;
@end

